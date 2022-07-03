#ifndef __SYS_CORE_ION_H
#define __SYS_CORE_ION_H

#include <linux/ion.h>

__BEGIN_DECLS

int ion_open();
int ion_close(int fd);
int ion_alloc(int fd, size_t len, size_t align, unsigned int heap_mask,
          unsigned int flags, struct ion_handle **handle);
int ion_alloc_fd(int fd, size_t len, size_t align, unsigned int heap_mask,
         unsigned int flags, int *handle_fd);
int ion_sync_fd(int fd, int handle_fd);
int ion_free(int fd, struct ion_handle *handle);
int ion_map(int fd, struct ion_handle *handle, size_t length, int prot,
            int flags, off_t offset, unsigned char **ptr, int *map_fd);
int ion_share(int fd, struct ion_handle *handle, int *share_fd);
int ion_import(int fd, int share_fd, struct ion_handle **handle);

__END_DECLS

#endif /* __SYS_CORE_ION_H */
