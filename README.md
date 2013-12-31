算法训练 逆序对  
时间限制：1.0s   内存限制：256.0MB
      
锦囊1
使用平衡树。
锦囊2
从叶子到根依次处理，每次把结点个数少的树中的结点依次添加到结点个数多的里面，并顺便计算逆序对个数和两棵子树交换后的逆序对个数。
问题描述
Alice是一个让人非常愉跃的人!他总是去学习一些他不懂的问题，然后再想出许多稀奇古怪的题目。这几天，Alice又沉浸在逆序对的快乐当中，他已近学会了如何求逆序对对数，动态维护逆序对对数等等题目，他认为把这些题让你做简直是太没追求了，于是，经过一天的思考和完善，Alice终于拿出了一道他认为差不多的题目：
有一颗2n-1个节点的二叉树，它有恰好n个叶子节点，每个节点上写了一个整数。如果将这棵树的所有叶子节点上的数从左到右写下来，便得到一个序列a[1]…a[n]。现在想让这个序列中的逆序对数量最少，但唯一的操作就是选树上一个非叶子节点，将它的左右两颗子树交换。他可以做任意多次这个操作。求在最优方案下，该序列的逆序对数最少有多少。
Alice自己已近想出了题目的正解，他打算拿来和你分享，他要求你在最短的时间内完成。
输入格式
第一行一个整数n。
下面每行，一个数x。
如果x=0，表示这个节点非叶子节点，递归地向下读入其左孩子和右孩子的信息，如果x≠0，表示这个节点是叶子节点，权值为x。
输出格式
输出一个整数，表示最少有多少逆序对。
样例输入
3
0
0
3
1
2
样例输出
1
数据规模与约定
对于20%的数据，n <= 5000。
对于100%的数据，1 <= n <= 200000，0 <= a[i]<2^31。
