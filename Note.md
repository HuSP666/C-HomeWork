# һ��������ע��

# ����scanf��scanf_s


scanf��C���Եı�׼���뺯��������ʱ��������ȫ�����������Խ������⡣΢���Ƴ���һ����ȫ�İ汾scanf_s��ȡ��scanf��
��scanf_s������һ����׼��C���������ֻ����΢��ı�������ʹ�á����ǵĿα�����ѧ��������΢��ı����������Խ�ѧ�в�ʹ��scanf_s��
��ʵ����ҵƽ̨�Ϳ��Ըľ�����vs���У�����scanf_s��������ҵ�Ϳ�����ʹ�á�
���Ҫ��vs�м���ʹ��scanf�������ڵ�һ�У�����������include���֮ǰ�����
#define _CRT_SECURE_NO_WARNINGS
scanf_s��scanf������÷���һ���������ܼ򵥵Ľ�scanfֱ�Ӹ�Ϊscanf_sʹ�ã���

����룺
char ch[20];
scanf(��%s��,ch);
��Ҫ��Ϊ��
scanf_s(��%s��,ch,20);
��Ȼ
scanf_s(��%s��,ch);
����������ȴ�ò���Ӧ�õĽ������ӦΪ�����д����Ǹ�20��Ĭ��ֵ��1��

������Ҫʹ��scanf_s��������ϸ�Ķ������ĵ�ѧϰ��
https://docs.microsoft.com/zh-cn/cpp/c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l?f1url=%3FappId%3DDev16IDEF1%26l%3DZH-CN%26k%3Dk(QUESTIONC053%252Fscanf_s);k(scanf_s);k(SolutionItemsProject);k(DevLang-C%252B%252B);k(TargetOS-Windows)%26rd%3Dtrue&view=msvc-160

# ����long int��long long int

��Visual studio�У�long int��int��һ���ġ���Ҫ����Χ��������
Ӧ��ʹ�� long long int��
��Ӧ�������ʽ��
%lld
���⣬ long long int�����int����ʡ�ԡ�ͬ����short int��unsigned int
�����intҲ����ʡ�ԡ�
