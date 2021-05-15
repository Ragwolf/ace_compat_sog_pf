param ([String[]] $only)

# Create folders
$buildPath = ".\build\@ACE_Compat_SOG_PF\addons"
New-Item $buildPath -ItemType Directory -Force

$buildPath = Resolve-Path $buildPath
$includePath = Resolve-Path '.\include.txt'

$armaTools = (Get-ItemProperty "HKCU:\Software\Bohemia Interactive\Arma 3 Tools").path
$addonBuilder = Join-Path $armaTools "AddonBuilder\AddonBuilder.exe"
$dsCreateKey = Join-Path $armaTools "DSSignFile\dsCreateKey.exe"

& "$dsCreateKey" "ACE_Compat_SOG_PF";

function Build-Addon
{
    param ([string] $addonFolder)
    $addonPath = Resolve-Path ".\addons\$addonFolder"
    & "$addonBuilder" $addonPath $buildPath -prefix="rag_vn\addons\$addonFolder" -clear -include="$includePath" -sign="ACE_Compat_SOG_PF.biprivatekey"
}

if ($PSBoundParameters.ContainsKey('only'))
{
    foreach($addonFolder in $only)
    {
        Build-Addon -addonFolder $addonFolder
    }
}
else
{
    foreach($addonFolder in Get-ChildItem -Directory .\Addons)
    {
        Build-Addon -addonFolder $addonFolder
    }
}

Copy-Item ".\mod.cpp" -Destination ".\build\@ACE_Compat_SOG_PF\"
New-Item -Path ".\build\@ACE_Compat_SOG_PF\keys" -ItemType Directory -Force
Copy-Item -Path ".\ACE_Compat_SOG_PF.bikey" -Destination ".\build\@ACE_Compat_SOG_PF\keys"
