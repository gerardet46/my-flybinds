#!/usr/bin/env sh

[ -d scripts/ ] || mkdir scripts/

for x in $(ls "$HOME/sc/flybinds/"); do
    cp -r "$HOME/sc/flybinds/$x" scripts/
done
