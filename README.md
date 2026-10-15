# my-c-learning

> clwater's first git, use to submit my-c-learning

我的 C 语言练习仓库。教材：谭浩强《C 程序设计》第六版。

## 怎么用

用 Visual Studio 打开 **`my-c-learning.slnx`**（打开解决方案，不是单独打开某个项目）。

这个解决方案里装了 12 个项目，规矩是：

> **一个项目 = 一道能独立跑起来的练习。**

想跑哪一个：在"解决方案资源管理器"里**右键那个项目 → 设为启动项目**，然后按 `F5`。

## 为什么要拆成这么多项目

因为 C 里 **`main` 是程序的入口，而一个程序只能有一个入口**。
同一个项目里的所有 `.c` 文件会被链接成同一个 `.exe`，所以一个项目里放两份 `main`，链接器会直接报错：

```
error LNK2005: main 已经在 xxx.obj 中定义
fatal error LNK1169: 找到一个或多个多重定义的符号
```

拆成多个项目，每个项目只管自己那一个 `main`，就不用再去注释来注释去了。

（什么时候该一个项目里放多个文件？当那几个文件是"同一个程序的不同零件"时——比如一个管输入、一个管计算、一个管输出。那时候只有一个文件里写 `main`，其它文件里写函数。）

## 目录

| 项目 | 内容 |
|---|---|
| `01_HelloWorld` | 第一个程序：Hello World |
| `02_printf_practice` | printf 输出练习 |
| `03_constant` | 常量与占位符 |
| `04_variable_1` | 变量：定义、赋值、参与计算 |
| `05_variable_2` | 变量的几条规矩 |
| `06_variable_3` | 整型：short / int / long / long long + sizeof |
| `07_variable_4` | 整型续：signed / unsigned |
| `08_variable_5` | 浮点：float / double / long double + sizeof |
| `09_variable_6` | 字符：char + sizeof |
| `10_second_converter` | 秒数换算（秒 → 时 分 秒） |
| `11_scanf_demo1` | scanf 整数输入 |
| `12_scanf_demo2` | scanf 字符串 + 整数输入 |

## 约定

- 所有源文件保存为 **UTF-8 with BOM**（见 `.editorconfig`），否则中文在 VS 和控制台里会乱码。
- 编译产物一律不提交（见 `.gitignore`）。
