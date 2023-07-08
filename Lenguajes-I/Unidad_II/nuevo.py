 py import os
import send2trash


def eliminar_carpetas_vacias(ruta):
    # Recorrer todas las carpetas y subcarpetas dentro de la ruta
    for carpeta_actual, subcarpetas, archivos in os.walk(ruta, topdown=False):
        for subcarpeta in subcarpetas:
            ruta_completa = os.path.join(carpeta_actual, subcarpeta)

            # Verificar si se puede acceder a la carpeta y si está vacía
            try:
                if os.access(ruta_completa, os.R_OK) and not os.listdir(ruta_completa):
                    # Mover la carpeta vacía a la papelera de reciclaje
                    send2trash.send2trash(ruta_completa)
                    print(f"Carpeta movida a la papelera: {ruta_completa}")
            except (PermissionError, FileNotFoundError):
                print(f"No se puede acceder a la carpeta: {ruta_completa}")


# Ruta a analizar
ruta = "D:"

# Llamar a la función para eliminar las carpetas vacías
eliminar_carpetas_vacias(ruta)



import os
import send2trash

