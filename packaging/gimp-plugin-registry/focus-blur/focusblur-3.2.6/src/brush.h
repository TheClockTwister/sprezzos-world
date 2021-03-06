/* Focus Blur -- blur with focus plug-in.
 * Copyright (C) 2002-2008 Kyoichiro Suda
 *
 * GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __FOCUSBLUR_BRUSH_H__
#define __FOCUSBLUR_BRUSH_H__

#include <glib/gtypes.h>
#include "focusblurtypes.h"

G_BEGIN_DECLS


/*---- Functions ----*/

FblurBrush*     focusblur_brush_new             (gchar           *name,
                                                 gboolean         balance);
void            focusblur_brush_destroy         (FblurBrush     **brush);
gboolean        focusblur_brush_name_is         (FblurBrush      *brush,
                                                 gchar           *brush_name);
gboolean        focusblur_brush_update_balance  (FblurBrush      *brush,
                                                 gboolean         balance);
gfloat          focusblur_brush_make_density    (FblurBrush      *brush,
                                                 gfloat           radius);
gfloat          focusblur_brush_render          (FblurBrush      *brush,
                                                 gfloat           radius,
                                                 gfloat           rotate,
                                                 gsize            rowstride,
                                                 gfloat          *centerp);

G_END_DECLS

#endif /* __FOCUSBLUR_BRUSH_H__ */
