#!/bin/bash
wget -P /tmp https://github.com/lumasia07/alx-low_level_programming/blob/master/0x17-dynamic_libraries/loterry.so
export LD_PRELOAD=/tmp/lottery.so
