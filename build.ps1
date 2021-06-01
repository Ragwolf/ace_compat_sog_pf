param ([String[]] $only)

# Create folders
$buildPath = ".\build\@ace_compat_sog_pf\addons"
New-Item $buildPath -ItemType Directory -Force

$buildPath = Resolve-Path $buildPath
$includePath = Resolve-Path '.\include.txt'

$armaTools = (Get-ItemProperty "HKCU:\Software\Bohemia Interactive\Arma 3 Tools").path
$addonBuilder = Join-Path $armaTools "AddonBuilder\AddonBuilder.exe"
$dsCreateKey = Join-Path $armaTools "DSSignFile\dsCreateKey.exe"

& "$dsCreateKey" "ace_compat_sog_pf";

function Build-Addon
{
    param ([string] $addonFolder)
    $addonPath = Resolve-Path ".\addons\$addonFolder"
    & "$addonBuilder" $addonPath $buildPath -prefix="ace_compat_sog_pf\addons\$addonFolder" -clear -include="$includePath" -sign="ace_compat_sog_pf.biprivatekey"
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

Copy-Item ".\mod.cpp" -Destination ".\build\@ace_compat_sog_pf\"
New-Item -Path ".\build\@ace_compat_sog_pf\keys" -ItemType Directory -Force
Copy-Item -Path ".\ace_compat_sog_pf.bikey" -Destination ".\build\@ace_compat_sog_pf\keys"
