#!/bin/bash
wget -P /tmp https://github.com/mazinmohd/alx-low_level_programming/raw/main/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandome.so
