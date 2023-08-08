@echo off
if not exist "%1:/ev3rt" mkdir "%1:/ev3rt"
if not exist "%1:/ev3rt/apps" mkdir "%1:/ev3rt/apps"
::if exist "%1:/ev3rt/apps/app" del "%1:/ev3rt/apps/app"
copy "app" "%1:/ev3rt/apps/"