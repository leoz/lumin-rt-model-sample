# lumin-rt-model-sample
Lumin Runtime Model Sample

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
