#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/HoussamMrabet/alx-low_level_programming/master/0x18-dynamic_libraries/libHoubet.so
export LD_PRELOAD=/tmp/libHoubet.so