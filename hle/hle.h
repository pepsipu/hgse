#include <stdint.h>

typedef enum
{
    BLOB,
    ELF,
} hle_loader_type_t;

typedef struct
{
    hle_loader_type_t type;
    uint8_t *data;
} hle_loader_config_t;

typedef struct
{

} hle_loadable_t;

hle_loadable_t *hle_loadable_create(hle_loader_config_t *config);
hle_loadable_t *hle_loadable_from_elf(char *path);