# Clone Repo #

```sh
git clone git@github.com:jmswu/threadx-palyaround.git
git submodule update --init --recursive
```

# Build for Linux Simulation #

```sh
rm -rf build
cmake -GNinja -Bbuild . -DCMAKE_TOOLCHAIN_FILE=deps/threadx/cmake/linux.cmake
ninja -Cbuild -j $(nproc)
```
