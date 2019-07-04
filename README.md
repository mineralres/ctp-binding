# CTP-BINDING

- 从syscall方式转换为gateway形式，可以在windows, linux运行
- 一些帮助文件如helper.hpp是用脚本直接从ctp的api头文件转换的
- CTP升级到6.3.15（看穿式版本）
- 依赖里有asio(非boost版本)
- 交易和行情同时在一个gateway里
- ftdc直连协议在测试中
- 与 [goshare](https://github.com/mineralres/goshare) 配合使用
- [example](https://github.com/mineralres/goshare/tree/master/cmd/examples/ctp)

# 使用

1. 编译
   ```shell
   git clone https://github.com/mineralres/ctp-binding.git
   cd ctp-binding; mkdir build; cd build; cmake .. -G"Visual Studio 15 2017 Win64"; // cmake -G注意 windown下使用64位的版本
   // 然后打开生成的sln编译gateway.exe
   ```
2. 用法
   ```shell
   gateway.exe 6080 trade // 启动交易网关. 6080是端口可根据情况切换
   gateway.exe 6080 md // 启动行情网关
   ```

   


# 交流

![png](https://github.com/mineralres/goshare/blob/master/doc/images/goshare-group.png)

* QQ群 1018983692 
