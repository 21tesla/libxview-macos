# libxview-macos
**Sun libxview and libolgx**

contact: logand@yorku.ca

The libraries compile with no errors. However, any binary built from libxview, like clock below, fails with a known issue associated with Xalloc around line 760 in **xview/server.c**. I have tried to apply the patch suggested by others, but it also suffers from the same XAlloc problem.

```
% ./clock

using XAllocID for MacOS
Assertion failed: (ret != inval_id), function _XAllocID, file xcb_io.c, line 520.

