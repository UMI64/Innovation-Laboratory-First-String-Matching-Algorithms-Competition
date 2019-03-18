# IL-SMAC
 # 创新实验室第一届字符串匹配算法大赛
## 参与方法
- 将算法写入时间测试[比赛代码(点这)](https://github.com/UMI64/Innovation-Laboratory-First-String-Matching-Algorithms-Competition/blob/master/ConsoleApplication1/ConsoleApplication1.cpp)中.
- 在比赛评比时间之前将 `代码文件` + `姓名` +`实验室门牌号` 发送到`949426508@qq.com`邮箱。
## 比赛规则
1. 语言限定：c/c++。
2. 不允许使用strstr库函数 。
3. 比赛前会给出10个公开的[**关键词**(见代码)](https://github.com/UMI64/Innovation-Laboratory-First-String-Matching-Algorithms-Competition/blob/master/ConsoleApplication1/ConsoleApplication1.cpp)，**需要判断的字符串**会在比赛时给出，长度不定。参赛者需要实现一个函数，判断这公开的10个**关键词**是否存在在**需要判断的的字符串**中，例如**需要判断的字符串**为“afidaknhefaf”，**关键词**为“dak”,程序将会识别到**关键词**“dak”存在于**需要判断的字符串**中,最后将5个**关键词**判断的结果保存在一个bool [10]的全局数组中。
## 评奖规则
###  算法评定标准：
  - 测试分为**时间测试**和**硬件测试**，时间测试时将使用同一台电脑测试代码运行时间，硬件测试也会使用同一片单片机进行。
  - 时间测试：在VS2017上运行20组，每组500次，取20组时间中最短的一次作为最终成绩。
  - 硬件测试：能够在STM32F103C8T6单片机上正确运行。
  - 功能测试：给出的结果必须正确，代码必须能够处理`任意`字符串!
## 奖励设置
-  算法所用时间最少，且能在STM32F103C8T6上运行，结果正确者，获得空心杯四旋翼一个，遥控器一个，原理图和控制代码。
## 注意事项
- 比赛评比时间：3月30日19:00。
- 地点：8教创新实验室234。
- c语言要用bool关键字的话需要包含stdbool.h头文件。
- 最终解释权归由两位发起人所有。
