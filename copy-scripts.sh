#!/usr/bin/env sh

[ -d scripts/ ] || mkdir scripts/

for x in $(ls "$HOME/scripts/flybinds/"); do
    cp -r "$HOME/scripts/flybinds/$x" scripts/
done
