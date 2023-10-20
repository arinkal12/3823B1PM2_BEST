int get_module(int a, int b, int c) {
       int result = 0;

    if (b != 0 && c != 0) {
        int temp = a % c;
        for (int i = 1; i <= b; i++) {
            result = (result + temp) % c;
        }
    }

    return result;
}
