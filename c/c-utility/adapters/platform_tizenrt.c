// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include <stdlib.h>
#include "azure_c_shared_utility/platform.h"
#include "azure_c_shared_utility/tlsio_mbedtls.h"

int platform_init(void)
{
	return 0;
}

const IO_INTERFACE_DESCRIPTION* platform_get_default_tlsio(void)
{
	return tlsio_mbedtls_get_interface_description();
}

STRING_HANDLE platform_get_platform_info(void)
{
    return STRING_construct("(tizenrt)");
}

void platform_deinit(void)
{
	return;
}