#!/bin/sh
kill -9 $(pgrep -d' ' -f gazebo)
kill -9 $(pgrep -d' ' -f transform)

