#!/usr/bin/bash

export PASSIVE="0"
export LD_LIBRARY_PATH="/vendor/lib64:/system/lib64:$LD_LIBRARY_PATH"
export LD_LIBRARY_PATH="/data/openpilot/third_party/snpe/aarch64:$LD_LIBRARY_PATH"
export LOGPRINT="debug"
exec ./launch_chffrplus.sh

