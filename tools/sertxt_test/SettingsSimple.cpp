// DON'T EDIT MANUALLY !!!!
// auto-generated by gen_settings_txt.py !!!!

#include "BaseUtil.h"
#include "SerializeTxt.h"
#include "SettingsSimple.h"

namespace sertxt {

#define FIELD_NAMES_SEQ "b_true\0b_false\0u16_1\0i32_1\0u32_1\0u64_1\0col_1\0float_1\0str_1\0str_escape\0wstr_1\0\0"

#define of offsetof
FieldMetadata gSimpleFieldMetadata[] = {
    {  0, of(Simple, bTrue),      TYPE_BOOL,  NULL },
    {  7, of(Simple, bFalse),     TYPE_BOOL,  NULL },
    { 15, of(Simple, u16_1),      TYPE_U16,   NULL },
    { 21, of(Simple, i32_1),      TYPE_I32,   NULL },
    { 27, of(Simple, u32_1),      TYPE_U32,   NULL },
    { 33, of(Simple, u64_1),      TYPE_U64,   NULL },
    { 39, of(Simple, col_1),      TYPE_COLOR, NULL },
    { 45, of(Simple, float_1),    TYPE_FLOAT, NULL },
    { 53, of(Simple, str_1),      TYPE_STR,   NULL },
    { 59, of(Simple, str_escape), TYPE_STR,   NULL },
    { 70, of(Simple, wstr_1),     TYPE_WSTR,  NULL },
};

StructMetadata gSimpleMetadata = { sizeof(Simple), 11, &gSimpleFieldMetadata[0] };

#undef of

Simple *DeserializeSimple(const char *data, size_t dataLen)
{
    return DeserializeSimpleWithDefault(data, dataLen, NULL, 0);
}

Simple *DeserializeSimpleWithDefault(const char *data, size_t dataLen, const char *defaultData, size_t defaultDataLen)
{
    char *dataCopy = str::DupN(data, dataLen);
    char *defaultDataCopy = str::DupN(defaultData, defaultDataLen);
    void *res = DeserializeWithDefault(dataCopy, dataLen, defaultDataCopy, defaultDataLen, &gSimpleMetadata, FIELD_NAMES_SEQ);
    free(dataCopy);
    free(defaultDataCopy);
    return (Simple*)res;
}

uint8_t *SerializeSimple(Simple *val, size_t *dataLenOut)
{
    return Serialize((const uint8_t*)val, &gSimpleMetadata, FIELD_NAMES_SEQ, dataLenOut);
}

void FreeSimple(Simple *val)
{
    FreeStruct((uint8_t*)val, &gSimpleMetadata);
}

} // namespace sertxt
