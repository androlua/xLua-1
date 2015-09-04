# xLua
extend lua syntax

在不修改字节码的情况下扩展 lua 语法。
现有扩展：
1、指定table的初始数组大小  { ... } # size
  如果 size 小于 初始数组项的话则忽略
  例子：
    local arr = { } # 10  -- 初始数组大小为 10 的 table
    local arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 } # 5 -- 由于初始数组项，则取项数 10
2、运算符 not、and、or 有其等价符号形式 !、&&、||
3、简单匿名函数 lambda表达式
  以 '\' 开始
  例子：
    \ -> 1    等价于      function() return 1 end
    \x -> x * x           function(x) return x * x end
    \x, y -> x + y        function(x, y) return x + y end
    \(x, y) -> x + y      function(x, y) return x + y end
    \ => print('1')       function() print('1') end
    \x => print(x)        function(x) print(x) end
    \x, y => print(x + y) function(x, y) print(x + y) end
    \x, y print(x, y)     function(x, y) print(x, y) end
    \x, y do print(x, y) print(x + y) end function(x, y) do print(x, y) print(x + y) end end
4、条件表达式 a ? b ::ｃ
5、简单元素添加
  arr <- elem   等价于  arr[#arr + 1] = elem
  但是 arr 只是计算一次
6、选择表达式
  a => b -> c :: [d, e] -> f :: g
  a =>
    b -> c;
    [d, e] -> f;
    g
  等价于
  a == b ? c :
  a == d || a == e ? f :
  g
  但是 a 只是计算一次
