#ifndef TH_GENERIC_FILE
#define TH_GENERIC_FILE "generic/serialization.h"
#else

template <class io>
void THPStorage_(writeFileRaw)(THWStorage *self, io fd);

template <class io>
THWStorage * THPStorage_(readFileRaw)(io fd, THWStorage *storage);

#endif
