﻿<#
.SYNOPSIS

Retrieves and extracts the CMSIS pack supported by NETMF from the official GitHub release.

.EXAMPLE

Get-CMSIS
#>

Import-Module .\tools\scripts\Build-netmf.psm1

# current officially supported version
$packVersion = "4.3.0"

# FUll versioned pack file name to download
$packFileName = "ARM.CMSIS.$packVersion.pack"

# base URL to download the pack file from
$packSourceURLBase = "https://github.com/ARM-software/CMSIS/releases/download/v$packVersion"

# download the pack and extract the files into the curent directory 
$dstPath = [System.IO.Path]::Combine( $SPOCLIENT, "CMSIS" )
Invoke-WebRequest -UseBasicParsing -Uri "$packSourceURLBase/$packFileName" | Expand-Stream -Destination $dstPath