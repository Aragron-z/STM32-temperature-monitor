# STM32-Temperature-Monitor

这是一个基于 STM32G474 的温度检测项目，使用 DS18B20 传感器实时采集温度数据，并通过 LCD 显示屏显示。

 ## 🛠 项目功能

- 实时采集温度（使用 DS18B20 数字温度传感器）
- 通过 SPI 通信将温度显示在 LCD 上
- 简洁易用，可用于学习和嵌入式温度监测设计参考

 ## 🔧 开发环境

- **芯片型号**：STM32G474RET6
- **开发工具**：STM32CubeIDE 1.17
- **编程语言**：C
- **下载工具**：ST-Link V2

 ## 🔌 硬件连接
- DS18B20温度传感器 三端分别接3.3V电源、GND、STM32G474的PB13（可以是其他端口，本工程配置PB13为GPIO_Output)
- YT240S030LCD显示屏 通过L610通信板的Arduino接口与STM32G474连接

 ## 🚀 使用说明
- 1.克隆本仓库后，使用STM32cubeIDE import工程文件
- 2.硬件连接好DS18B20温度传感器与LCD屏幕
- 3.编译并烧录到STM32开发板
  
 ## 🖼 显示效果
- 如图室温为28.625℃                              <img width="493" alt="image" src="https://github.com/user-attachments/assets/a5f8daa6-672f-49a2-8930-87f6fb03240e" />


- 如图手心温度为36.375℃                          <img width="390" alt="image" src="https://github.com/user-attachments/assets/3bab3572-3b81-497b-9cde-7e1843944ebf" />


- 如图两瓶冰镇饮料之间的温度为18.188℃             <img width="305" alt="image" src="https://github.com/user-attachments/assets/30379f50-7983-493f-98af-8a0c04b8f2f9" />

