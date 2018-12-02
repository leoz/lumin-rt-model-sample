# lumin-rt-model-sample
Lumin Runtime Model Sample

---

## Building this app

1. Build

```shell
mabu ModelSample.package -t device -s <your certificate file>
```

2. Install

```shell
mldb install -u .out/ModelSample/ModelSample.mpk
```

3. Run

```shell
mldb launch com.leoz.modelsample
```

## License

All source code is MIT licensed, as found in the LICENSE file.

[Water Bottle Model](https://github.com/KhronosGroup/glTF-Sample-Models/tree/master/2.0/WaterBottle) file is Creative Commons licensed, as found here [![CC0](http://i.creativecommons.org/p/zero/1.0/88x31.png)](http://creativecommons.org/publicdomain/zero/1.0/).
