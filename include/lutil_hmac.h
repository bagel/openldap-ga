#include <stdint.h>


#ifndef SHA1_H__
#define SHA1_H__

#define SHA1_BLOCKSIZE     64
#define SHA1_DIGEST_LENGTH 20

typedef struct {
  uint32_t digest[8];
  uint32_t count_lo, count_hi;
  uint8_t  data[SHA1_BLOCKSIZE];
  int      local;
} SHA1_INFO;

void sha1_init(SHA1_INFO *sha1_info) __attribute__((visibility("hidden")));
void sha1_update(SHA1_INFO *sha1_info, const uint8_t *buffer, int count)
  __attribute__((visibility("hidden")));
void sha1_final(SHA1_INFO *sha1_info, uint8_t digest[20])
  __attribute__((visibility("hidden")));

#endif


#ifndef _HMAC_H_
#define _HMAC_H_

void hmac_sha1(const uint8_t *key, int keyLength,
               const uint8_t *data, int dataLength,
               uint8_t *result, int resultLength)
 __attribute__((visibility("hidden")));

#endif /* _HMAC_H_ */
