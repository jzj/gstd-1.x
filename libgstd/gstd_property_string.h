/*
 * This file is part of GStreamer Daemon
 * Copyright 2015-2022 Ridgerun, LLC (http://www.ridgerun.com)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __GSTD_PROPERTY_STRING_H__
#define __GSTD_PROPERTY_STRING_H__

#include <glib-object.h>

#include "gstd_property.h"

G_BEGIN_DECLS

/*
 * Type declaration.
 */
#define GSTD_TYPE_PROPERTY_STRING \
  (gstd_property_string_get_type())
#define GSTD_PROPERTY_STRING(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GSTD_TYPE_PROPERTY_STRING,GstdPropertyString))
#define GSTD_PROPERTY_STRING_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GSTD_TYPE_PROPERTY_STRING,GstdPropertyStringClass))
#define GSTD_IS_PROPERTY_STRING(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GSTD_TYPE_PROPERTY_STRING))
#define GSTD_IS_PROPERTY_STRING_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GSTD_TYPE_PROPERTY_STRING))
#define GSTD_PROPERTY_STRING_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), GSTD_TYPE_PROPERTY_STRING, GstdPropertyStringClass))

typedef struct _GstdPropertyString GstdPropertyString;
typedef struct _GstdPropertyStringClass GstdPropertyStringClass;
GType gstd_property_string_get_type (void);


struct _GstdPropertyString
{
  GstdProperty parent;
};

struct _GstdPropertyStringClass
{
  GstdPropertyClass parent_class;
};

GstdReturnCode gstd_property_string_to_string (GstdObject * self,
    gchar ** outstring);

G_END_DECLS

#endif // __GSTD_PROPERTY_STRING_H__
