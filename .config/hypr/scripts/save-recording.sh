#!/bin/sh

killall -SIGINT gpu-screen-recorder && sleep 0.5 && notify-send -t 1500 -u low "GPU Screen Recorder" "Recording saved" --app-name "GPU Screen Recorder" --icon=GPU.Screen.Recorder
