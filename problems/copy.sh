#!/usr/bin/bash

# A simple copy script of a file to a shared directory for my host os to recognize a file I am working on in WSL Ubuntu

rm -rf $jointoses/*
cp $1 $jointoses
