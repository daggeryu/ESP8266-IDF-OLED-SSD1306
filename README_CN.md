
# 用于ESP8266的SSD1306 OLED显示器-Espressif IDF开发环境

(有关示例的详细信息，请参阅上层“examples”目录中的README.md文件.)

#### 引脚分配:

**注意：默认情况下使用以下引脚分配，您可以在`menuconfig`中更改这些.

|                  | SDA    | SCL    |
|------------------| ------ | ------ |
| ESP8266 I2C主机    | GPIO5  | GPIO4  |

- 主机:
  - GPIO5被指定为I2C主端口的数据信号
  - GPIO4被指定为I2C主端口的时钟信号

### 配置项目

打开项目配置菜单（`idf.py menuconfig`）。然后进入"I2C Config“菜单。

- 在“I2CConfig”菜单中，您可以根据您的板子设置SDA SCL的引脚编号。您还可以修改主机的I2C端口号(ESP8266只能是0)和SSD1306的从机地址.


### 构建和烧录

输入“idf.py-p PORT flash monitor”以构建，烧录和监控项目。

(To exit the serial monitor, type ``Ctrl-]``.)
有关配置和使用ESP-IDF构建项目的完整步骤，请参阅[入门指南](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/index.html)。

