#!/usr/bin/env bash
mkdir "$1"
cd "$1"
wget https://github.com/PeterHusman/EV3RTProjectTemplate/releases/latest/download/project.zip
unzip project.zip
rm project.zip
