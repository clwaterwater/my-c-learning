# my-c-learning

> clwater 的 C 语言练习仓库。教材：谭浩强《C 程序设计》第六版。
> 一条练习 = 一个能独立跑起来的项目。这也是这个仓库的组织方式。

我的 C 语言练习仓库。编号是学习顺序，项目名直接说明这题练什么 —— **看名字就知道要不要点进去**。

## 怎么用

用 Visual Studio 打开 **`my-c-learning.slnx`**（是打开解决方案，不是单独打开某个项目）。

解决方案里装了 29 个项目，规矩是：

> **一个项目 = 一道能独立跑起来的练习。**

想跑哪一个：在"解决方案资源管理器"里**右键那个项目 → 设为启动项目**，然后按 `F5`。

## 为什么要拆成这么多项目

因为 C 里 **`main` 是程序的入口，而一个程序只能有一个入口**。
同一个项目里的所有 `.c` 会被链接成同一个 `.exe`，所以一个项目里放两份 `main`，链接器会直接报错：

```
error LNK2005: main 已经在 xxx.obj 中定义
fatal error LNK1169: 找到一个或多个多重定义的符号
```

拆成多个项目，每个项目只管自己那一个 `main`，就不用再去注释来注释去了。

（什么时候该一个项目里放多个文件？当那几个文件是"同一个程序的不同零件"时 —— 比如一个管输入、一个管计算、一个管输出。那时只有一个文件里写 `main`，其它文件里写函数。）

## 一、起步：输出与变量

| 项目 | 内容 |
|---|---|
| `01_hello_world` | 第一个程序：Hello World（留着当起点） |
| `02_printf_format` | printf 与占位符：`%d %f %c %s`，以及 `%.2f` 保留两位 |
| `03_variable_basics` | 变量的定义与赋值，以及必须遵守的 5 条规矩 |
| `04_integer_types` | 整型家族：short / int / long / long long，sizeof 实测字节 |
| `05_signed_unsigned` | 有符号 vs 无符号：signed / unsigned + `%u`，含 `-1 → 4294967295` 的坑 |
| `06_float_types` | 浮点：float / double / long double |
| `07_char_type` | 字符 char：单引号、sizeof、char 也能装标点 |

## 二、第一个有点逻辑的程序

| 项目 | 内容 |
|---|---|
| `08_second_converter` | 秒数换算（秒 → 时 分 秒）。第一个有实际逻辑的程序 |

## 三、输入：scanf

| 项目 | 内容 |
|---|---|
| `09_scanf_basic` | scanf 读整数：`scanf_s("%d", &a)` |
| `10_scanf_string` | scanf 读字符串：`%s` 要容量，且数组名不加 `&` |
| `11_scanf_multi` | 一次读多个值：姓名 + 年龄 + 体重 |
| `12_scanf_calc` | 读两个数做 `+ - * / %`，含除零保护 |
| `13_box_volume` | 长方体：读长宽高，算三个面的面积和体积 |

## 四、运算符（本次整理的重点）

| 项目 | 内容 |
|---|---|
| `14_arith_operators` | 算术运算 `+ - * / %` 的细节：整数除法截断、取余符号跟随被除数、不能除零 |
| `15_digit_split` | 三位数拆解：百位 / 十位 / 个位（含非三位数校验） |
| `16_char_to_ascii` | 字符转数字：`'a'` 的 ASCII 值是多少 |
| `17_increment_operator` ⭐ | **自增自减：`++a` 与 `a++` 的区别**（前后缀对比，每一步都能跑） |
| `18_compound_assignment` | 复合赋值：`+= -= *= /= %=` |
| `19_relational_operators` | 关系运算：`== != > >= < <=`，含把 `==` 写成 `=` 的陷阱 |
| `20_relational_judgement` | 关系运算的实际判断：偶数 / 范围 / 余额够不够 |
| `21_logical_operators` ⭐ | **逻辑运算 `&& \|\| !`，含短路求值演示**（亲眼看到右边根本没执行） |
| `22_logical_no_seven` | 逻辑运算综合：两位数不含 7 且不是 7 的倍数 |
| `23_ternary_operator` | 三元运算符 `? :`，取三个数的最大值 |
| `24_comma_operator` | 逗号运算符：一个表达式里顺次做多件事 |
| `27_operator_mixed` | 综合练习：绝对值 → 取余 → 乘 10（也给了逗号运算的写法） |

> 注：`27_operator_mixed` 其实属于运算符这一章，`25 / 26` 属于分支那章。编号有交叉是因为它按历史提交顺序排的 —— **找题看名字，别看编号**。

## 五、分支：if 与 switch

| 项目 | 内容 |
|---|---|
| `25_if_else_chain` | if / else if / else 链：成绩 → 奖励 |
| `26_if_nested` | if 嵌套：在一个分支里再判断一次 |
| `28_switch_season` | switch：月份 → 季节 |
| `29_switch_ticket` | switch：机票预订的按键选择 |

## notes/ —— 这里记坑

| 文件 | 内容 |
|---|---|
| `错题本.md` | 已经填平的坑清单。格式：报错原文 → 为什么 → 正确写法 → 一句记牢 |
| `未定义行为(UB).md` | 为什么 `i++ + ++i` 没有答案。旧版 `19_operator_demo4/2.c` 注释里的内容，抽出来重写成文 |

> 复习自增自减时，`17_increment_operator`（能跑的正确版本）和
> `未定义行为(UB).md`（为什么不能写成 `i++ + ++i`）是配套的一对，一起看。

## 约定

- 所有源文件保存为 **UTF-8 with BOM**（见 `.editorconfig`），否则中文在 VS 和控制台里会乱码。
- **只有 `.vcxproj` 必须提交**（它是项目的说明书，VS 靠它知道怎么编译）。
  `*.vcxproj.filters`（VS 左侧目录怎么分组）和 `*.user`（本机偏好）都不进仓库，
  VS 会自己重建 —— 这条规则写在 `.gitignore` 里。

### 整理后每个练习目录只剩两样东西

```
17_increment_operator/
├── 17_increment_operator.vcxproj   ← 必须提交（VS 靠它编译）
└── increment_operator.c            ← 你的代码
```

filters 和 user 都不会再出现在 GitHub 上。
