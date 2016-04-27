﻿#region License
/* 
 * Copyright (C) 1999-2016 John Källén.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Xml;

namespace Reko.Core
{
    public class XmlOptions
    {
        private static object ReadItem(XmlElement element)
        {
            if (element.Name == "item")
            {
                return element.InnerText;
            }
            else if (element.Name == "list")
            {
                return element.ChildNodes
                    .OfType<XmlElement>()
                    .Select(e => ReadItem(e))
                    .ToList();
            }
            else if (element.Name == "dict")
            {
                return ReadDictionaryElements(
                    element.ChildNodes.OfType<XmlElement>());
            }
            throw new NotSupportedException();
        }

        private static Dictionary<string, object> ReadDictionaryElements(IEnumerable<XmlElement> elements)
        {
            return elements.ToDictionary(
                e => e.Attributes["key"] != null ? e.Attributes["key"].Value : null,
                e => ReadItem(e));
        }

        public static Dictionary<string, object> LoadIntoDictionary(XmlElement[] options)
        {
            if (options == null)
                return new Dictionary<string, object>();
            return ReadDictionaryElements(options);
        }
    }
}