#!/usr/bin/bash

export LD_LIBRARY_PATH="/vendor/lib64:/system/lib64:$LD_LIBRARY_PATH"
export LD_LIBRARY_PATH="/data/openpilot/third_party/snpe/aarch64:$LD_LIBRARY_PATH"
ln -sfn $(pwd) /data/pythonpath
export PYTHONPATH="$PWD:$PWD/pyextra"

selfdrive/debug/uiview.py
