#!/bin/sh
set -e

make -C gcc clean
make -C gcc cc_old
mv gcc/old_agbcc .

make -C gcc clean
make -C gcc cc_normal
mv gcc/agbcc .
make -C gcc cxx_normal
mv gcc/agbcxx .

make -C libgcc clean
make -C libgcc
mv libgcc/libgcc.a .

make -C libc clean
make -C libc
mv libc/libc.a .
