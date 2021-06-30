@echo off
:: This program takes two arguments, the directory name and a file, and will put a template file with the given name in the given directory
mkdir %1 && copy ..\templates\template.cpp .\%1\%2
