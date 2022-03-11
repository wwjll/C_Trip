<!-- 内容来源于 侯捷标准库STL 视频教程 -->
##
STL 六大部件
1.容器(Containers)
2.分配器(Allocator)
2.算法(Algorithms)
2.迭代器(Iterators)
2.适配器(Adapters)
2.函子(Functors)

### 容器
#### 1.Sequence Container
1.Array 固定容量
  array.size() 长度
  array.front() 首元素
  array.back() 尾元素
  array.data() array内存块首地址
2.Vector 尾部可扩容
3.Deque 头尾均可扩容
4.List 双向链表
5.Forward-List:

#### 2.Associative Containers
1.Set/Multiset
2.Map/Multimap(key-value)
3.HashTable 

### 迭代器
容器 “前开后闭” 区间 [), begin() 指向第一个元素的位置 end() 指向最后一个元素的下一个位置
new Features of C++11:
1.range-based for statement
for( decl: coll) {
  statement
}

eg:
for(int i: { 2,3,4,5,8,10 }) {
  std::cout << i << std::endl;
}

2.auto keyword

3.


