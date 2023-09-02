for (int num = lower; num <= upper; ++num) {
        if (is_prime(num)) {
            if (!first_prime) {
                std::cout << ", ";
            }
            std::cout << num;
            first_prime = false;
        }
    }