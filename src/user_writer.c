#include <smolrtsp/user_writer.h>

#include <string.h>

void smolrtsp_char_buffer_writer(Slice99 data, void *buffer) {
    strncat((char *)buffer, data.ptr, Slice99_size(data));
}
