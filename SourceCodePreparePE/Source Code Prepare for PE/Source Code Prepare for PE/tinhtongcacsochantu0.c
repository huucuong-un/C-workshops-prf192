int main() {
    int n;
    scanf("%d", &n);
    // Biến lưu trữ tổng các số từ a tới b
    // Lưu ý: bạn cần khởi tạo giá trị cho biến = 0
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            // sum += i tương đương với sum = sum + i
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}