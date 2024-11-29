#!/bin/bash
# -----------------------------------------------------
# Quit all running waybar instances
# -----------------------------------------------------
killall syshud
killall waybar
pkill waybar
sleep 0.5
# -----------------------------------------------------
# Run waybar
# -----------------------------------------------------
waybar
sleep 0.5
syshud
sleep 0.5
swaync-client -rs
sleep 0.5
swaync-client -rs
