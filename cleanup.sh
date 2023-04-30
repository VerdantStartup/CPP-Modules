#!/bin/bash

find "$(pwd)" -depth -name "DS_Store" -print
find "$(pwd)" -depth -name "DS_Store" -delete
find "$(pwd)" -depth -name "DS_Store" -print
