#include <iostream>


/*
これらの識別子を直接使うことは少なく、多くの場合プリプロセッサ命令と組み合わせて使ったり、
デバッグのためにコンソール出力を使ったりして、今何を実行しているのかを確かめるために利用する。
 */
class S
{
    public:
        void foo();
        void stdc_version();
};

void S::foo()
{
    std::cout << "__func__：" << __func__ << std::endl;
}


void S::stdc_version()
{
    #ifdef __STDC__
        puts("Conforms to standards.");
    #else
        puts("Not standard compliant.");
    #endif
    #ifdef __STDC_VERSION__
        printf("%ld\n", __STDC_VERSION__);
    #else
        printf("__STDC_VERSION__ undefined.\n");
    #endif
}


int main()
{
    // このソースファイル名を出力
    std::cout << "__FILE__：" << __FILE__ << std::endl;

    // この行の行番号を出力
    std::cout << "__LINE__：" << __LINE__ << std::endl;

    // この関数の関数名を出力
    std::cout << "__func__：" << __func__ << std::endl;

    // 参照しているC++のバージョンを出力
    std::cout << "__cplusplus：" << __cplusplus << std::endl;

    int line = __LINE__; // 変数に現在の行番号を格納

    // lineは現在の行番号ではなく、変数に格納されたときの行番号が表示されることに注意
    std::cout << "line：" << line << ", __LINE__：" << __LINE__
        << std::endl;

    S s;
    s.foo(); // test
    s.stdc_version(); // test
}
