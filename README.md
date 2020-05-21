# Wiring

## -----MCU CPP Support Package

### 关于 Wiring

Wiring本是一个面向微控制的开源编程框架，后面渐渐被Arduino取代，现在已经很少会提及Wiring了。在这里我依然将项目的名字命名为Wiring，一方面为了纪念Wiring框架的贡献，另一方面该库的内容本就是Wiring(Arduino)框架的子集。

这里的Wiring代表的是：基于wiring框架构建的通用嵌入式微控制器C++语法支持包。该包不提供具体的硬件支持，没有特定平台的限定。主要是为了帮助那些想用arduino语法又想高效利用单片机资源的MCU爱好者们。大家可以很方便的将该库移植到自己的微控制平台上使用。

### Wiring的功能

- 提供非官方的String类的实现，方便单片机使用。
- 提供丰富的print函数
- 基于流（如串口）的数据都可以采用继承Stream的方式实现
- ......

### 工程介绍

```
---
|
|--Wiring 代码实现
|
|--test 功能测试
```

