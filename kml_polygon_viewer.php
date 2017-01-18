<?php
$css_style = '<style>
    .example-table {
        font-family: Verdana;
        font-size:12px;
        -webkit-font-smoothing: antialiased;
        width: auto;
        overflow: auto;
        display: block;
    }
    
    .example-table th {
        background-color: rgb(112, 196, 105);
        color: white;     
        text-align: center;
    }
    
    .example-table td {
        background-color: rgb(238, 238, 238);     
        color: rgb(111, 111, 111);
    }

    p {
        background-color: rgb(238, 238, 238);     
        text-align:center;
        border:1px solid lightgreen;
        font-family: Tines new roman;
        font-size: 200%;
    }
    .note, .version {
       background-color: AliceBlue ;     
       font-family: Tines new roman;
        font-style: italic;
    }
</style>';

$kml_path = __DIR__ . "\\sites\\default\\files\\Kirana11 Shops.kml";

if (!file_exists ($kml_path)) {
    $html = $css_style . '<div class="note">File not found: \\sites\\default\\files\\Kirana11 Shops.kml</div>'; 
} else {
  $xml = simplexml_load_file($kml_path);
  $placemark = $xml->Document->Folder[0];

  $i=0;
  $name = '<p>KML polygon viewer</p><br/>';
  $html = $css_style . $name . '<table class="example-table">';
  $html .= '<tr><th>Sl.No.</th><th>Store name</th><th>Coordinates</th></tr>';

  foreach ($xml->Document->Folder[0]->Placemark as $_placemark) {  
      $i++;

      if (is_object($_placemark->Polygon->outerBoundaryIs)) {
          $html .= '<tr><td>' . $i . '</td><td>' . $_placemark->name . '</td><td>' . $_placemark->Polygon->outerBoundaryIs->LinearRing->coordinates . '</td></tr>';
      } else {
          $html .= '<tr><td>' . $i . '</td><td>' . $_placemark->name . '</td><td><font color="red">Invalid polygon</font></td></tr>';
      }   
  }

  $html .= '</table>';
}

$version = '<br /><div class="version">Current version: v0.2</div>';
echo $html . $version;
