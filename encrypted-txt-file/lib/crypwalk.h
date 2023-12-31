#ifndef CRYPWALK
#define CRYPWALK

typedef enum {
	ENCRYPTION_SUCCESS = 0,
	ENCRYPTION_FOPEN_ERR = -1,
	ENCRYPTION_ALLOC_ERR = -2,
	ENCRYPTION_INVALID_KEY = -3,
	ENCRYPTION_ALGO_ERR = -4,
	ENCRYPTION_WRITE_FILE_ERR = -5,
	ENCRYPTION_FILE_ERR = -6,
} ENCRYPT_FILE_RETURN;

typedef enum {
	DECRYPTION_SUCCESS = 0,
	DECRYPTION_INVALID_KEY = -1,
	DECRYPTION_FOPEN_ERR = -2,
	DECRYPTION_FILE_ERR = -3,
	DECRYPTION_ALGO_ERR = -4,
	DECRYPTION_INCORRECT_KEY = -5,
	DECRYPTION_ALLOC_ERROR = 6,
} DECRYPT_FILE_RETURN;

ENCRYPT_FILE_RETURN encrypt_file(const char* file_name, const char* encryption_key);

DECRYPT_FILE_RETURN decrypt_file(const char* file_name, const char* encryption_key);

#endif
