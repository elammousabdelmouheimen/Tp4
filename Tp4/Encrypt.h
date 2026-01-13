#ifndef ENCRYPT_H
#define ENCRYPT_H
#include <string>

class Encrypt {
	protected:
	std::string _plain;
	std::string _cipher;
	public:
		Encrypt(std::string plain, std::string cipher) : _plain(plain), _cipher(cipher);
		const std::string& getPlain() const;
		const std::string& getCipher() const;
		virtual void encode() = 0;
		virtual void decode() = 0;
};

#endif