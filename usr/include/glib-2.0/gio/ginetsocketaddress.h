/* GIO - GLib Input, Output and Streaming Library
 *
 * Copyright (C) 2008 Christian Kellner, Samuel Cormier-Iijima
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Authors: Christian Kellner <gicmo@gnome.org>
 *          Samuel Cormier-Iijima <sciyoshi@gmail.com>
 */

#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif

#ifndef __G_INET_SOCKET_ADDRESS_H__
#define __G_INET_SOCKET_ADDRESS_H__

#include <gio/gsocketaddress.h>

G_BEGIN_DECLS

#define G_TYPE_INET_SOCKET_ADDRESS         (g_inet_socket_address_get_type ())
#define G_INET_SOCKET_ADDRESS(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_INET_SOCKET_ADDRESS, GInetSocketAddress))
#define G_INET_SOCKET_ADDRESS_CLASS(k)     (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_INET_SOCKET_ADDRESS, GInetSocketAddressClass))
#define G_IS_INET_SOCKET_ADDRESS(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_INET_SOCKET_ADDRESS))
#define G_IS_INET_SOCKET_ADDRESS_CLASS(k)  (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_INET_SOCKET_ADDRESS))
#define G_INET_SOCKET_ADDRESS_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_INET_SOCKET_ADDRESS, GInetSocketAddressClass))

typedef struct _GInetSocketAddressClass   GInetSocketAddressClass;
typedef struct _GInetSocketAddressPrivate GInetSocketAddressPrivate;

struct _GInetSocketAddress
{
  GSocketAddress parent_instance;

  /*< private >*/
  GInetSocketAddressPrivate *priv;
};

struct _GInetSocketAddressClass
{
  GSocketAddressClass parent_class;
};

GType           g_inet_socket_address_get_type     (void) G_GNUC_CONST;

GSocketAddress *g_inet_socket_address_new          (GInetAddress       *address,
						    guint16             port);

GInetAddress *  g_inet_socket_address_get_address  (GInetSocketAddress *address);
guint16         g_inet_socket_address_get_port     (GInetSocketAddress *address);

guint32         g_inet_socket_address_get_flowinfo (GInetSocketAddress *address);
guint32         g_inet_socket_address_get_scope_id (GInetSocketAddress *address);

G_END_DECLS

#endif /* __G_INET_SOCKET_ADDRESS_H__ */
