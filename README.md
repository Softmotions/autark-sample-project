# Sample Project Built with Autark

This is a sample project used to demonstrate the basic features of the Autark build system and its script syntax.

It demonstrates building a simple `./hello` executable that depends on the `./libhello` project module.

```sh
./build.sh
```

Install project to the given prefix (./install)
```sh
./build.sh --prefix=./install
```

Full clean rebuild
```sh
./build.sh -c
```
